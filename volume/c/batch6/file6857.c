// fichero 6857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6857;

Registro6857 crear_registro6857(int id) {
    Registro6857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
