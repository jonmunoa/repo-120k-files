// fichero 10781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10781;

Registro10781 crear_registro10781(int id) {
    Registro10781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
