// fichero 36741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36741;

Registro36741 crear_registro36741(int id) {
    Registro36741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
