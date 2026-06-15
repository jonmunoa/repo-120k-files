// fichero 12777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12777;

Registro12777 crear_registro12777(int id) {
    Registro12777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
