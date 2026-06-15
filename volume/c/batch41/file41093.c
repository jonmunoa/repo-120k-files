// fichero 41093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41093;

Registro41093 crear_registro41093(int id) {
    Registro41093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
