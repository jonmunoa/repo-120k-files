// fichero 20241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20241;

Registro20241 crear_registro20241(int id) {
    Registro20241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
