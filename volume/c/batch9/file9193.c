// fichero 9193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9193;

Registro9193 crear_registro9193(int id) {
    Registro9193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
