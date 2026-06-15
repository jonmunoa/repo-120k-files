// fichero 20805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20805;

Registro20805 crear_registro20805(int id) {
    Registro20805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
