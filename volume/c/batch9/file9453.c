// fichero 9453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9453;

Registro9453 crear_registro9453(int id) {
    Registro9453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
