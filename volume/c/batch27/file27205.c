// fichero 27205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27205;

Registro27205 crear_registro27205(int id) {
    Registro27205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
