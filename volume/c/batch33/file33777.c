// fichero 33777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33777;

Registro33777 crear_registro33777(int id) {
    Registro33777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
