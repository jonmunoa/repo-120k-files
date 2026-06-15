// fichero 27569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27569;

Registro27569 crear_registro27569(int id) {
    Registro27569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
