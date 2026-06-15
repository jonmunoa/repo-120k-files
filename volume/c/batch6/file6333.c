// fichero 6333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6333;

Registro6333 crear_registro6333(int id) {
    Registro6333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
