// fichero 12817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12817;

Registro12817 crear_registro12817(int id) {
    Registro12817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
