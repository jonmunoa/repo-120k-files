// fichero 24693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24693;

Registro24693 crear_registro24693(int id) {
    Registro24693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
