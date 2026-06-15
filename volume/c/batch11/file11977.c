// fichero 11977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11977;

Registro11977 crear_registro11977(int id) {
    Registro11977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
