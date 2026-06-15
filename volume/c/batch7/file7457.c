// fichero 7457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7457;

Registro7457 crear_registro7457(int id) {
    Registro7457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
