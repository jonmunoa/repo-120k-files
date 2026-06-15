// fichero 29609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29609;

Registro29609 crear_registro29609(int id) {
    Registro29609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
