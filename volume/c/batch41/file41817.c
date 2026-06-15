// fichero 41817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41817;

Registro41817 crear_registro41817(int id) {
    Registro41817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
