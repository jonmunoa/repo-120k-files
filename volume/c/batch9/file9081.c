// fichero 9081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9081;

Registro9081 crear_registro9081(int id) {
    Registro9081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
