// fichero 6785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6785;

Registro6785 crear_registro6785(int id) {
    Registro6785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
