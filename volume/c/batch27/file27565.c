// fichero 27565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27565;

Registro27565 crear_registro27565(int id) {
    Registro27565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
