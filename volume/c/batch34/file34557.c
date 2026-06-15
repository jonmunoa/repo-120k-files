// fichero 34557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34557;

Registro34557 crear_registro34557(int id) {
    Registro34557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
