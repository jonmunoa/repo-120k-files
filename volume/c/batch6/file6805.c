// fichero 6805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6805;

Registro6805 crear_registro6805(int id) {
    Registro6805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
