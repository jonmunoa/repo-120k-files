// fichero 29741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29741;

Registro29741 crear_registro29741(int id) {
    Registro29741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
