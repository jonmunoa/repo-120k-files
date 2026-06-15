// fichero 36745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36745;

Registro36745 crear_registro36745(int id) {
    Registro36745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
