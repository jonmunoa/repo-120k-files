// fichero 41829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41829;

Registro41829 crear_registro41829(int id) {
    Registro41829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
