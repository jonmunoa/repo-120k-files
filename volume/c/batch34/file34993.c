// fichero 34993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34993;

Registro34993 crear_registro34993(int id) {
    Registro34993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
