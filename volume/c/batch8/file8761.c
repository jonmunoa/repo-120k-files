// fichero 8761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8761;

Registro8761 crear_registro8761(int id) {
    Registro8761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
