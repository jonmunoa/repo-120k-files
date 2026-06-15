// fichero 9405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9405;

Registro9405 crear_registro9405(int id) {
    Registro9405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
