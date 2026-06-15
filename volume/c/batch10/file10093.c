// fichero 10093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10093;

Registro10093 crear_registro10093(int id) {
    Registro10093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
