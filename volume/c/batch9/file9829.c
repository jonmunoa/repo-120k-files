// fichero 9829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9829;

Registro9829 crear_registro9829(int id) {
    Registro9829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
