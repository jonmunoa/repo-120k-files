// fichero 34805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34805;

Registro34805 crear_registro34805(int id) {
    Registro34805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
