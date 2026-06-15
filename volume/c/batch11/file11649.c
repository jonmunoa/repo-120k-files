// fichero 11649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11649;

Registro11649 crear_registro11649(int id) {
    Registro11649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
