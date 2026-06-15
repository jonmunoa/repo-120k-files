// fichero 9357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9357;

Registro9357 crear_registro9357(int id) {
    Registro9357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
