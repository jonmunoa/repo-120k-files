// fichero 9693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9693;

Registro9693 crear_registro9693(int id) {
    Registro9693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
