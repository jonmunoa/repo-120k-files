// fichero 8693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8693;

Registro8693 crear_registro8693(int id) {
    Registro8693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
