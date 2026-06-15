// fichero 34977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34977;

Registro34977 crear_registro34977(int id) {
    Registro34977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
