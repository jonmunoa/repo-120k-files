// fichero 9129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9129;

Registro9129 crear_registro9129(int id) {
    Registro9129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
