// fichero 29777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29777;

Registro29777 crear_registro29777(int id) {
    Registro29777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
