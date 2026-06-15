// fichero 11609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11609;

Registro11609 crear_registro11609(int id) {
    Registro11609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
