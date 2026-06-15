// fichero 34941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34941;

Registro34941 crear_registro34941(int id) {
    Registro34941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
