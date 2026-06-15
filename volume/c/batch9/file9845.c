// fichero 9845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9845;

Registro9845 crear_registro9845(int id) {
    Registro9845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
