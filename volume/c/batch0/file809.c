// fichero 809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro809;

Registro809 crear_registro809(int id) {
    Registro809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
