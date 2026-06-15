// fichero 24609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24609;

Registro24609 crear_registro24609(int id) {
    Registro24609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
