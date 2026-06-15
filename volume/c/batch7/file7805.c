// fichero 7805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7805;

Registro7805 crear_registro7805(int id) {
    Registro7805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
