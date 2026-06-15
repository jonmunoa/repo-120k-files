// fichero 34205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34205;

Registro34205 crear_registro34205(int id) {
    Registro34205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
