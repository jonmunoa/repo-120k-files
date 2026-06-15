// fichero 9669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9669;

Registro9669 crear_registro9669(int id) {
    Registro9669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
