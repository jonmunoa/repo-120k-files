// fichero 11805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11805;

Registro11805 crear_registro11805(int id) {
    Registro11805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
