// fichero 29977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29977;

Registro29977 crear_registro29977(int id) {
    Registro29977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
