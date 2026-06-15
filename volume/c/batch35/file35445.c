// fichero 35445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35445;

Registro35445 crear_registro35445(int id) {
    Registro35445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
