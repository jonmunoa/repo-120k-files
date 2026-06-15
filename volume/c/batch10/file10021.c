// fichero 10021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10021;

Registro10021 crear_registro10021(int id) {
    Registro10021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
