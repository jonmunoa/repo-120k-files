// fichero 49761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49761;

Registro49761 crear_registro49761(int id) {
    Registro49761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
