// fichero 20093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20093;

Registro20093 crear_registro20093(int id) {
    Registro20093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
