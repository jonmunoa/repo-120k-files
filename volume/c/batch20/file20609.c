// fichero 20609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20609;

Registro20609 crear_registro20609(int id) {
    Registro20609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
