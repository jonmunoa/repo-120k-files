// fichero 20781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20781;

Registro20781 crear_registro20781(int id) {
    Registro20781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
